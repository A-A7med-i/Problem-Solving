readarray names

for name in "${names[@]}"; do
  if [[ "$name" != *[Aa]* ]]; then
    echo "$name"
  fi
done
